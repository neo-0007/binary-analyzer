
ulong FUN_004d65f0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    FUN_0051f420();
    uVar5 = 0x198;
  }
  else {
    uVar5 = thunk_FUN_00410bd0();
    lVar6 = thunk_FUN_00410bd0(*(undefined8 *)(param_1 + 0x90));
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(lVar6 + 0x70);
      if (*(char *)(lVar1 + 0x2c) != '\x01') {
        if (((*(char *)(lVar1 + 0x2c) == '\x02') && (lVar6 = *(long *)(lVar1 + 0x50), lVar6 != 0))
           && (*(long *)(lVar1 + 0x30) != 0)) {
          if (param_2 == 0) {
            *param_3 = lVar6;
            return 1;
          }
          if (lVar6 == *param_3) {
            iVar3 = FUN_004d5f10(uVar5);
            lVar6 = (long)iVar3;
            if (lVar6 != 0) {
              lVar8 = FUN_0041ad90(lVar6,"../crypto/dh/dh_pmeth.c",0x1bf);
              if (lVar8 != 0) {
                iVar3 = FUN_004d52b0(lVar8,uVar2,uVar5);
                if ((iVar3 < 1) ||
                   (iVar3 = FUN_004d4d60(param_2,*param_3,lVar8,lVar6,*(undefined8 *)(lVar1 + 0x30),
                                         *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48)
                                         ,*(undefined8 *)(lVar1 + 0x38)), iVar3 == 0)) {
                  uVar4 = 0;
                }
                else {
                  *param_3 = *(long *)(lVar1 + 0x50);
                  uVar4 = 1;
                }
                FUN_0041aef0(lVar8,lVar6,"../crypto/dh/dh_pmeth.c",0x1cb);
                return (ulong)uVar4;
              }
              FUN_0051f420();
              FUN_0051f540("../crypto/dh/dh_pmeth.c",0x1c0,"pkey_dh_derive");
              FUN_0051f8f0(5,0xc0100,0);
            }
          }
        }
        return 0;
      }
      if (param_2 == 0) {
        iVar3 = FUN_004d5f10(uVar5);
        *param_3 = (long)iVar3;
        return 1;
      }
      if (*(int *)(lVar1 + 0x10) == 0) {
        uVar7 = FUN_004d5200(param_2,uVar2,uVar5);
      }
      else {
        uVar7 = FUN_004d52b0();
      }
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *param_3 = (long)(int)uVar7;
      return 1;
    }
    FUN_0051f420();
    uVar5 = 0x19e;
  }
  FUN_0051f540("../crypto/dh/dh_pmeth.c",uVar5,"pkey_dh_derive");
  FUN_0051f8f0(5,0x6c,0);
  return 0;
}

