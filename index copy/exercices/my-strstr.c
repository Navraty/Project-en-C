
char* my_strstr(char* haystack, char* needle) {
  int i = 0;
  int j = 0;

  while (haystack[i] != '\0') {
    while (needle[j] != '\0' && haystack[i] == needle[j]) {
      i++;
      j++;
    }

    if (needle[j] == '\0') {
      return &haystack[i - j];
    }

    i++;
  }

  return 0;
}