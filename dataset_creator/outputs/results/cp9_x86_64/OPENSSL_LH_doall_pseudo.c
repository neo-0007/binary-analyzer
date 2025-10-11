
void OPENSSL_LH_doall(long *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  iVar3 = (int)param_1[3] + -1;
  if (-1 < iVar3) {
    lVar4 = (long)iVar3 << 3;
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2);
        puVar2 = puVar1;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -8;
    } while (iVar3 != -1);
  }
  return;
}

