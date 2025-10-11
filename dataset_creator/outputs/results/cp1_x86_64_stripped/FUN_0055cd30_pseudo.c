
long FUN_0055cd30(long param_1,int param_2,long *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == -1) {
    param_2 = thunk_FUN_007129d0();
  }
  lVar2 = 0;
  if (-1 < param_2) {
    iVar1 = param_2 * 2 + 2;
    lVar4 = (long)iVar1;
    lVar2 = FUN_0041ad90(lVar4,"../crypto/pkcs12/p12_utl.c",0x1b);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs12/p12_utl.c",0x1c,"OPENSSL_asc2uni");
      FUN_0051f8f0(0x23,0xc0100,0);
    }
    else {
      lVar3 = 0;
      if (iVar1 != 2) {
        do {
          *(undefined1 *)(lVar2 + lVar3) = 0;
          *(undefined1 *)(lVar2 + 1 + lVar3) = *(undefined1 *)(param_1 + ((int)lVar3 >> 1));
          lVar3 = lVar3 + 2;
        } while ((int)lVar3 < param_2 * 2);
      }
      *(undefined1 *)(lVar2 + -2 + lVar4) = 0;
      *(undefined1 *)(lVar2 + -1 + lVar4) = 0;
      if (param_4 != (int *)0x0) {
        *param_4 = iVar1;
      }
      if (param_3 != (long *)0x0) {
        *param_3 = lVar2;
      }
    }
  }
  return lVar2;
}

