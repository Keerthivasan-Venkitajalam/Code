import nltk
import csv
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize
from nltk.probability import FreqDist
from nltk.classify import NaiveBayesClassifier

nltk.download('stopwords')
nltk.download('punkt')

csv_file_path = 'Python\emailspamfinal\spamsms-1.csv'
spam_messages = []

with open(csv_file_path, newline='', encoding='utf-8') as csvfile:
    csv_reader = csv.DictReader(csvfile)
    for row in csv_reader:
        message = row['message']
        label = row['label']
        spam_messages.append((message, label))

def extract_features(message):
    words = set(message)
    features = {}
    for word in word_features:
        features[word] = (word in words)
    return features

def preprocess_text(text):
    stop_words = set(stopwords.words('english'))
    words = word_tokenize(text.lower())
    words = [word for word in words if word.isalpha() and word not in stop_words]
    return words

def msg_classify(msg):
    processed_test_message = preprocess_text(msg)
    features = extract_features(processed_test_message)
    result = classifier.classify(features)
    print("Message:")
    print(msg)
    print("Classification:")
    print(result)
    return result

messages = [(preprocess_text(message), label) for message, label in spam_messages]

all_words = [word for message, label in messages for word in message]

word_freq = FreqDist(all_words)

word_features = list(word_freq.keys())[:300]

training_data = [(extract_features(message), label) for message, label in messages]

classifier = NaiveBayesClassifier.train(training_data)
