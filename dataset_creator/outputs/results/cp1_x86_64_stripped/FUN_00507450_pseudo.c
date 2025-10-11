
undefined8 FUN_00507450(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_2b8 [80];
  undefined1 local_268 [80];
  undefined1 local_218 [80];
  undefined1 local_1c8 [80];
  undefined1 local_178 [80];
  undefined1 local_128 [80];
  undefined1 local_d8 [152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00505c10(local_218,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    iVar1 = FUN_00505c10(local_1c8,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_00505c10(local_2b8,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        FUN_00506720(local_268,local_2b8);
        FUN_00505d90(local_d8,local_268);
        FUN_00505300(local_2b8,local_d8);
        FUN_00506150(local_d8,local_218,local_2b8);
        FUN_00505300(local_218,local_d8);
        FUN_00505630(local_178,local_218);
        if (param_2 == 0) {
LAB_00507570:
          FUN_00506150(local_d8,local_2b8,local_268);
          FUN_00505300(local_2b8,local_d8);
          FUN_00506150(local_d8,local_1c8,local_2b8);
          FUN_00505300(local_1c8,local_d8);
          FUN_00505630(local_128,local_1c8);
          if (param_3 != 0) {
            lVar2 = FUN_00505b40(param_3,local_128);
            if (lVar2 == 0) {
              FUN_0051f420();
              uVar3 = 0x753;
              goto LAB_005075e5;
            }
          }
          uVar3 = 1;
          goto LAB_00507497;
        }
        lVar2 = FUN_00505b40(param_2,local_178);
        if (lVar2 != 0) goto LAB_00507570;
        FUN_0051f420();
        uVar3 = 0x748;
LAB_005075e5:
        FUN_0051f540("../crypto/ec/ecp_nistp521.c",uVar3,
                     "ossl_ec_GFp_nistp521_point_get_affine_coordinates");
        FUN_0051f8f0(0x10,0x80003,0);
      }
    }
  }
  uVar3 = 0;
LAB_00507497:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

