
undefined ** FUN_004239c0(uint param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  undefined1 *local_50;
  undefined1 local_48 [16];
  uint local_38;
  long local_20;
  
  lVar1 = (long)(int)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x4e0) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else if (*(int *)(&DAT_008de2f0 + lVar1 * 0x28) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/objects/obj_dat.c",0xe3,"OBJ_nid2obj");
      FUN_0051f8f0(8,0x65,0);
      ppuVar2 = (undefined **)0x0;
      goto LAB_00423a09;
    }
    ppuVar2 = &PTR_s_UNDEF_008de2e0 + lVar1 * 5;
  }
  else {
    FUN_00419fe0(0x40,0);
    ppuVar2 = DAT_0093fd30;
    if (DAT_0093fd30 != (undefined **)0x0) {
      local_50 = local_48;
      local_58[0] = 3;
      local_38 = param_1;
      lVar1 = FUN_00545b60(DAT_0093fd30,local_58);
      if (lVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/objects/obj_dat.c",0xf6,"OBJ_nid2obj");
        FUN_0051f8f0(8,0x65,0);
        ppuVar2 = (undefined **)0x0;
      }
      else {
        ppuVar2 = *(undefined ***)(lVar1 + 8);
      }
    }
  }
LAB_00423a09:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ppuVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

