class TrieNode
{
    public:
        char data;	// Holds character value
    TrieNode *children[26];	// Array of 26 TrieNode pointers (A-Z)
    bool isterminal;	// True if word ends at this node

    TrieNode(char ch)
    {
        data = ch;	// Initialize data with input character
        for (int i = 0; i < 26; i++)	// Loop through children array
        {
            children[i] = NULL;	// Initialize all children as NULL
        }
        isterminal = false;	// Initialize isterminal as false
    }
};

class Trie
{
    public:
       	// Pointer to root node of the Trie
        TrieNode * root;
    Trie()
    {
        root = new TrieNode(' ');	// Initialize root with space character
    }

   	// Method to insert a word into the Trie
    void insert(string word)
    {
        TrieNode *current = root;	// Start at the root

        for (int i = 0; i < word.length(); i++)	// Loop through each character in the word
        {
            int index = word[i] - 'a';	// Get index by subtracting 'a' from character
            if (!current->children[index])	// If child node at this index doesn't exist
            {
                current->children[index] = new TrieNode(word[i]);	// Create new TrieNode with this character
            }
            current = current->children[index];	// Move to the next node in the Trie
        }
        current->isterminal = true;	// Mark the last node as terminal (end of the word)
    }

   // Method to search for a word in the Trie
bool search(string word)
{
    TrieNode *current = root; // Start at the root

    for (int i = 0; i < word.length(); i++) // Loop through each character in the word
    {
        int index = word[i] - 'a'; // Get index by subtracting 'a' from character
        if (!current->children[index]) // If child node at this index doesn't exist
        {
            return false; // Word is not in the Trie
        }
        current = current->children[index]; // Move to the next node in the Trie
    }
    return current->isterminal; // Return true if word is in the Trie and ends at this node
}

    bool startsWith(string prefix) {
            
            TrieNode *current = root; // Start at the root

    for (int i = 0; i < prefix.length(); i++) // Loop through each character in the word
    {
        int index = prefix[i] - 'a'; // Get index by subtracting 'a' from character
        if (!current->children[index]) // If child node at this index doesn't exist
        {
            return false; // Word is not in the Trie
        }
        current = current->children[index]; // Move to the next node in the Trie
    } 
            
            return true;
    }
};

/**
 *Your Trie object will be instantiated and called as such:
 *Trie* obj = new Trie();
 *obj->insert(word);
 *bool param_2 = obj->search(word);
 *bool param_3 = obj->startsWith(prefix);
 */