
int FUN_00414390(int *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_90;
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
  iVar2 = *param_1;
  local_90 = 0;
  if (((iVar2 - 0x10U & 0xffffffef) == 0 || (iVar2 - 0x40U & 0xffffffbf) == 0) || (iVar2 == 0x100))
  {
    FUN_0041e440(&local_c8,"distid",&local_90,0);
    local_68 = local_a8;
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    FUN_0041e470(&local_c8);
    local_40 = local_a8;
    local_60 = local_c8;
    uStack_58 = uStack_c0;
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    iVar2 = FUN_004142f0(param_1,&local_88);
    uVar1 = local_68;
    if (iVar2 == -2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_lib.c",0x4e3,"get1_id_data");
      FUN_0051f8f0(6,0x93,0);
    }
    else if (0 < iVar2) {
      if (param_2 != 0) {
        thunk_FUN_00713a50(param_2,local_90,local_68);
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = uVar1;
      }
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x4d8,"get1_id_data");
    iVar2 = -2;
    FUN_0051f8f0(6,0x93,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

