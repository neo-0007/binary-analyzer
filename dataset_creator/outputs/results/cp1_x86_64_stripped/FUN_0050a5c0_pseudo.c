
ulong FUN_0050a5c0(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004b73e0(local_168,*(undefined8 *)(param_1 + 0x10),4);
  if (iVar1 != 0) {
    iVar1 = FUN_004b73e0(local_148,*(undefined8 *)(param_1 + 0x18),4);
    if (iVar1 != 0) {
      iVar1 = FUN_004b73e0(local_128,*(undefined8 *)(param_1 + 0x20),4);
      if (iVar1 != 0) {
        FUN_005f74c0(&local_68,local_128);
        FUN_005f71e0(local_108,&local_68,local_128);
        FUN_005f74c0(&local_68,local_108);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f71e0(local_e8,&local_68,local_108);
        FUN_005f74c0(&local_68,local_e8);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f71e0(local_c8,&local_68,local_e8);
        iVar1 = 7;
        FUN_005f74c0(&local_68,local_c8);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        FUN_005f71e0(local_a8,&local_68,local_c8);
        iVar1 = 0xf;
        FUN_005f74c0(&local_68,local_a8);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        FUN_005f71e0(local_88,&local_68,local_a8);
        iVar1 = 0x1f;
        FUN_005f74c0(&local_68,local_88);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 0x80;
        FUN_005f71e0(&local_68,&local_68,local_128);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 0x20;
        FUN_005f71e0(&local_68,&local_68,local_88);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 0x10;
        FUN_005f71e0(&local_68,&local_68,local_88);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = 8;
        FUN_005f71e0(&local_68,&local_68,local_a8);
        do {
          FUN_005f74c0(&local_68,&local_68);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        FUN_005f71e0(&local_68,&local_68,local_c8);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f71e0(&local_68,&local_68,local_e8);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f71e0(&local_68,&local_68,local_108);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f74c0(&local_68,&local_68);
        FUN_005f71e0(&local_68,&local_68,local_128);
        local_188 = local_68;
        uStack_180 = uStack_60;
        local_178 = local_58;
        uStack_170 = uStack_50;
        FUN_005f74c0(local_e8,&local_188);
        FUN_005f71e0(local_c8,local_e8,local_168);
        if (param_2 != 0) {
          FUN_005f7b20(local_88,local_c8);
          uVar2 = FUN_004b7470(param_2,local_88,4);
          if ((int)uVar2 == 0) goto LAB_0050a656;
        }
        uVar2 = 1;
        if (param_3 != 0) {
          FUN_005f71e0(&local_188,&local_188,local_e8);
          FUN_005f71e0(local_a8,&local_188,local_148);
          FUN_005f7b20(&local_68,local_a8);
          iVar1 = FUN_004b7470(param_3,&local_68,4);
          uVar2 = (ulong)(iVar1 != 0);
        }
        goto LAB_0050a656;
      }
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x4aa,"ecp_nistz256_get_affine");
  FUN_0051f8f0(0x10,0x92,0);
  uVar2 = 0;
LAB_0050a656:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

