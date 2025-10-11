
size_t fread_unlocked(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar2 = __size * __n;
  if (sVar2 == 0) {
    return 0;
  }
  sVar1 = _IO_sgetn(__stream,__ptr,sVar2);
  if (sVar2 - sVar1 != 0) {
    return sVar1 / __size;
  }
  return __n;
}

