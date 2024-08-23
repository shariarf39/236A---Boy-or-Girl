# A. Boy or Girl

To identify users' genders based on usernames, our hero uses the following method: if the number of distinct characters in the username is odd, the user is male; otherwise, the user is female. Given a username, determine the gender according to this method.

**Input:**
- A non-empty string containing only lowercase English letters (username), with a maximum length of 100 characters.

**Output:**
- Print `"CHAT WITH HER!"` if the number of distinct characters is even (indicating female).
- Print `"IGNORE HIM!"` if the number of distinct characters is odd (indicating male).

**Examples:**

1. **Input:**
**Output:**
**Explanation:** There are 6 distinct characters in `"wjmzbmr"`: `"w"`, `"j"`, `"m"`, `"z"`, `"b"`, `"r"`. Since 6 is even, the output is `"CHAT WITH HER!"`.

2. **Input:**
**Output:**
**Explanation:** There are 6 distinct characters in `"xiaodao"`. Since 6 is even, the output is `"CHAT WITH HER!"`.

3. **Input:**
**Output:**
**Explanation:** There are 8 distinct characters in `"sevenkplus"`. Since 8 is even, the output is `"CHAT WITH HER!"`.
