
undefined8 FUN_004f97f0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004f96d0(local_138,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    iVar1 = FUN_004f96d0(local_118,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_004f96d0(local_178,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        FUN_004f90e0(local_158,local_178);
        FUN_004f8b70(local_b8,local_158);
        FUN_004f8d60(local_178,local_b8);
        FUN_004f8c40(local_b8,local_138,local_178);
        FUN_004f8d60(local_138,local_b8);
        FUN_004f8f70(local_f8,local_138);
        if (param_2 == 0) {
LAB_004f990d:
          FUN_004f8c40(local_b8,local_178,local_158);
          FUN_004f8d60(local_178,local_b8);
          FUN_004f8c40(local_b8,local_118,local_178);
          FUN_004f8d60(local_118,local_b8);
          FUN_004f8f70(local_d8,local_118);
          if (param_3 != 0) {
            lVar2 = FUN_004f9630(param_3,local_d8);
            if (lVar2 == 0) {
              FUN_0051f420();
              uVar3 = 0x55b;
              goto LAB_004f9982;
            }
          }
          uVar3 = 1;
          goto LAB_004f9834;
        }
        lVar2 = FUN_004f9630(param_2,local_f8);
        if (lVar2 != 0) goto LAB_004f990d;
        FUN_0051f420();
        uVar3 = 0x550;
LAB_004f9982:
        FUN_0051f540("../crypto/ec/ecp_nistp224.c",uVar3,
                     "ossl_ec_GFp_nistp224_point_get_affine_coordinates");
        FUN_0051f8f0(0x10,0x80003,0);
      }
    }
  }
  uVar3 = 0;
LAB_004f9834:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

