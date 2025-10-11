
int FUN_005b20f0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_b8 [32];
  undefined8 local_98;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_7c = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  FUN_0041ced0(local_b8,"reseed_counter",&local_7c);
  local_58._0_8_ = local_98;
  iVar2 = FUN_005b2040(param_1);
  if (iVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x75,"get_parent_reseed_count");
    FUN_0051f8f0(0x39,0xc9,0);
    iVar2 = *(int *)(param_1 + 0xd8) + -2;
    if (iVar2 == 0) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x50))(uVar1,local_78);
    if (iVar2 == 0) {
      local_7c = 0;
    }
    iVar2 = local_7c;
    if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
      (**(code **)(param_1 + 0x48))();
      iVar2 = local_7c;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

