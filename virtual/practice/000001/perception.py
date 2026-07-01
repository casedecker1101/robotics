# Initial Perception Layer Model

# Input Layer: Raw Input Event
def raw_input_event():
    raw = input("User says: ")
    print("[RAW INPUT]", raw)
    return raw

# Signal Conditioning Layer: Preprocess Input
def condition_signal(raw):
    clean = raw.strip().lower()
    clean = clean.replace("!", "").replace(".", "")
    print("[SIGNAL RECONSTRUCTION COMPLETED]", clean)
    return clean

# Feature Extraction Layer
KEYWORDS = {
    "pass": "ACTION",
    "butter": "OBJECT",
    "hello": "GREET",
    "stop": "HALT",
    "move": "ACTION",
    "arm": "BODY_PART"
}

def extract_features(clean):
    features = []
    for word in clean.split():
        if word in KEYWORDS:
            features.append((word, KEYWORDS))
