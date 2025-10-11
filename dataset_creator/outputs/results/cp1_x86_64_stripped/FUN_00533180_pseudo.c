
uint FUN_00533180(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_00409920();
    if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: l <= sizeof(iv)","../crypto/evp/e_rc2.c",0x8c);
    }
    uVar2 = FUN_004a2900(param_2,&local_50,local_48,uVar1);
    if (uVar1 == uVar2) {
      iVar4 = (int)local_50;
      if (iVar4 == 0x3a) {
        iVar4 = 0x80;
      }
      else if (iVar4 == 0x78) {
        iVar4 = 0x40;
      }
      else {
        if (iVar4 != 0xa0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/e_rc2.c",0x7d,"rc2_magic_to_meth");
          uVar2 = 0xffffffff;
          FUN_0051f8f0(6,0x6c,0);
          goto LAB_0053323c;
        }
        iVar4 = 0x28;
      }
      if ((((uVar2 == 0) || (iVar3 = FUN_00538a80(param_1,0,0,0,local_48,0xffffffff), iVar3 != 0))
          && (iVar3 = FUN_00536c00(param_1,3,iVar4,0), 0 < iVar3)) &&
         (iVar4 = FUN_005375b0(param_1,iVar4 >> 3), 0 < iVar4)) goto LAB_0053323c;
    }
    uVar2 = 0xffffffff;
  }
LAB_0053323c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

