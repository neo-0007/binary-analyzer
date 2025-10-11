
undefined4 FUN_004062e0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  local_90 = param_3;
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/evp/digest.c",0x1e0,"EVP_DigestFinalXOF");
    FUN_0051f8f0(6,0xda,0);
  }
  else if (*(long *)(lVar3 + 0x70) == 0) {
    if (((*(byte *)(lVar3 + 0x10) & 2) != 0) && (param_3 < 0x80000000)) {
      iVar1 = (**(code **)(lVar3 + 0x50))(param_1,3,param_3,0);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x30))(param_1,param_2);
        lVar3 = *(long *)(param_1 + 8);
        if (*(code **)(lVar3 + 0x40) != (code *)0x0) {
          (**(code **)(lVar3 + 0x40))(param_1);
          FUN_0040b0c0(param_1,2);
          lVar3 = *(long *)(param_1 + 8);
        }
        FUN_004227b0(*(undefined8 *)(param_1 + 0x20),(long)*(int *)(lVar3 + 0x4c));
        goto LAB_004063c6;
      }
    }
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/evp/digest.c",0x1ff,"EVP_DigestFinalXOF");
    FUN_0051f8f0(6,0xb2,0);
  }
  else if (*(long *)(lVar3 + 0xa0) == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/evp/digest.c",0x1e8,"EVP_DigestFinalXOF");
    FUN_0051f8f0(6,0xbc,0);
  }
  else {
    FUN_0041dba0(&local_c8,"xoflen",&local_90);
    uVar2 = 0;
    local_68 = local_a8;
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    FUN_0041e470(&local_c8);
    local_60 = local_c8;
    uStack_58 = uStack_c0;
    local_40 = local_a8;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    iVar1 = FUN_00406270(param_1,&local_88);
    if (0 < iVar1) {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0xa0))
                        (*(undefined8 *)(param_1 + 0x38),param_2,&local_90,local_90);
    }
  }
LAB_004063c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

