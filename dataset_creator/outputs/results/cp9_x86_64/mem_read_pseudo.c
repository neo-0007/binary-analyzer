
ulong mem_read(BIO *param_1,void *param_2,uint param_3)

{
  BIO_METHOD *pBVar1;
  size_t __n;
  ulong uVar2;
  
  uVar2 = (ulong)param_3;
  pBVar1 = (BIO_METHOD *)param_1->prev_bio->callback;
  if (((ulong)param_1->ptr & 0x200) != 0) {
    pBVar1 = param_1->prev_bio->method;
  }
  BIO_clear_flags(param_1,0xf);
  if (-1 < (int)param_3) {
    uVar2 = (ulong)param_3;
    if (*(ulong *)pBVar1 < (ulong)(long)(int)param_3) {
      uVar2 = *(ulong *)pBVar1 & 0xffffffff;
    }
  }
  if ((param_2 != (void *)0x0) && (0 < (int)uVar2)) {
    __n = (size_t)(int)uVar2;
    memcpy(param_2,pBVar1->name,__n);
    *(ulong *)pBVar1 = *(ulong *)pBVar1 - __n;
    pBVar1->bwrite = pBVar1->bwrite + -__n;
    pBVar1->name = pBVar1->name + __n;
    return uVar2;
  }
  if ((*(ulong *)pBVar1 == 0) &&
     (uVar2 = (ulong)*(uint *)&param_1->next_bio, *(uint *)&param_1->next_bio != 0)) {
    BIO_set_flags(param_1,9);
    return uVar2;
  }
  return uVar2;
}

