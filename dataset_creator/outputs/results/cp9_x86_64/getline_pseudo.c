
__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = getdelim(__lineptr,__n,10,__stream);
  return _Var1;
}

