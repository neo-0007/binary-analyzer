
int FUN_00622990(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  uVar4 = thunk_FUN_007129d0();
  if (uVar4 == 0) {
    *param_2 = 0;
    return 0;
  }
  lVar5 = FUN_0041ad90((long)((int)(uVar4 >> 2) * 3),"../crypto/ct/ct_b64.c",0x24);
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_b64.c",0x26,"ct_base64_decode");
    FUN_0051f8f0(0x32,0xc0100,0);
  }
  else {
    iVar6 = (int)uVar4;
    iVar3 = FUN_005fd6a0(lVar5,param_1,uVar4 & 0xffffffff);
    if (iVar3 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ct/ct_b64.c",0x2c,"ct_base64_decode");
      FUN_0051f8f0(0x32,0x6c,0);
    }
    else {
      uVar1 = uVar4 - 3;
      do {
        iVar2 = (int)uVar4;
        uVar4 = uVar4 - 1;
        if (*(char *)(param_1 + uVar4) != '=') {
          *param_2 = lVar5;
          return (iVar3 - iVar6) + iVar2;
        }
      } while (uVar4 != uVar1);
    }
  }
  FUN_0041ad60(lVar5,"../crypto/ct/ct_b64.c",0x3b);
  return -1;
}

