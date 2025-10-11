
undefined8 mem_gets(BIO *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  BIO_METHOD *pBVar5;
  
  pBVar5 = (BIO_METHOD *)param_1->prev_bio->callback;
  if (((ulong)param_1->ptr & 0x200) != 0) {
    pBVar5 = param_1->prev_bio->method;
  }
  BIO_clear_flags(param_1,0xf);
  iVar1 = (int)*(undefined8 *)pBVar5;
  if (param_3 <= (int)*(undefined8 *)pBVar5) {
    iVar1 = param_3 + -1;
  }
  if (iVar1 < 1) {
    *param_2 = 0;
    return 0;
  }
  uVar2 = 1;
  do {
    uVar4 = uVar2 & 0xffffffff;
    if (pBVar5->name[uVar2 - 1] == '\n') break;
    uVar2 = uVar2 + 1;
  } while (uVar2 != iVar1 + 1);
  uVar3 = mem_read(param_1,param_2,uVar4);
  if (0 < (int)uVar3) {
    param_2[(int)uVar3] = 0;
  }
  return uVar3;
}

