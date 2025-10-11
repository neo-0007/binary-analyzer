
hostent * BIO_gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = gethostbyname(__name);
  return phVar1;
}

