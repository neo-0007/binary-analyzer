
undefined8
FUN_0042fa20(undefined8 param_1,long param_2,int param_3,undefined8 param_4,int param_5,
            undefined8 param_6,ushort param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  long in_FS_OFFSET;
  long local_80;
  undefined4 local_70;
  ushort local_6c;
  ushort local_6a;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 * 8 != (uint)param_7) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x12a,"ossl_rsa_prf");
    uVar5 = 0xffffffff;
    FUN_0051f8f0(4,0xc0103,0);
    goto LAB_0042fc32;
  }
  local_6a = param_7 << 8 | param_7 >> 8;
  lVar3 = FUN_00545280();
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",0x133,"ossl_rsa_prf");
    uVar5 = 0xffffffff;
    FUN_0051f8f0(4,0xc0103,0);
    local_80 = 0;
  }
  else {
    local_80 = FUN_004069d0(param_1,"sha256",0);
    if (local_80 == 0) {
      FUN_0051f420();
      uVar4 = 0x140;
    }
    else {
      iVar1 = FUN_00544dc0(lVar3,param_6,0x20,local_80,0);
      if (0 < iVar1) {
        if (0 < param_3) {
          uVar6 = 0;
          iVar1 = 0;
          do {
            iVar2 = FUN_00544dc0(lVar3,0,0,0,0);
            if (iVar2 < 1) {
              FUN_0051f420();
              uVar4 = 0x14b;
              goto LAB_0042fc71;
            }
            local_6c = uVar6 << 8 | uVar6 >> 8;
            iVar2 = FUN_00545040(lVar3,&local_6c,2);
            if (iVar2 < 1) {
              FUN_0051f420();
              uVar4 = 0x153;
              goto LAB_0042fc71;
            }
            iVar2 = FUN_00545040(lVar3,param_4,(long)param_5);
            if (iVar2 < 1) {
              FUN_0051f420();
              uVar4 = 0x157;
              goto LAB_0042fc71;
            }
            iVar2 = FUN_00545040(lVar3,&local_6a,2);
            if (iVar2 < 1) {
              FUN_0051f420();
              uVar4 = 0x15b;
              goto LAB_0042fc71;
            }
            local_70 = 0x20;
            if (iVar1 + 0x1f < param_3) {
              iVar2 = FUN_00545060(lVar3,param_2,&local_70);
              if (iVar2 < 1) {
                FUN_0051f420();
                uVar4 = 0x16d;
                goto LAB_0042fc71;
              }
            }
            else {
              iVar2 = FUN_00545060(lVar3,local_68,&local_70);
              if (iVar2 < 1) {
                FUN_0051f420();
                uVar4 = 0x167;
                goto LAB_0042fc71;
              }
              thunk_FUN_00713a50(param_2,local_68,(long)(param_3 - iVar1));
            }
            iVar1 = iVar1 + 0x20;
            uVar6 = uVar6 + 1;
            param_2 = param_2 + 0x20;
          } while (iVar1 != (param_3 - 1U & 0xffffffe0) + 0x20);
        }
        uVar5 = 0;
        goto LAB_0042fc20;
      }
      FUN_0051f420();
      uVar4 = 0x145;
    }
LAB_0042fc71:
    uVar5 = 0xffffffff;
    FUN_0051f540("../crypto/rsa/rsa_pk1.c",uVar4,"ossl_rsa_prf");
    FUN_0051f8f0(4,0xc0103,0);
  }
LAB_0042fc20:
  FUN_00545130(lVar3);
  FUN_00406a50(local_80);
LAB_0042fc32:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

