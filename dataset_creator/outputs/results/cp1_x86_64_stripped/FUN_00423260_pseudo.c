
void FUN_00423260(undefined4 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_48;
  int local_44;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  lVar2 = FUN_00545d60(DAT_0093fd28);
  local_40 = FUN_0041ad90(lVar2 * 8,"../crypto/objects/o_names.c",0x151);
  if (local_40 != 0) {
    local_44 = 0;
    FUN_00423200(param_1,FUN_00422bd0,&local_48);
    FUN_006e8e20(local_40,(long)local_44,8,FUN_00422bb0);
    if (0 < local_44) {
      lVar2 = 0;
      do {
        lVar1 = lVar2 * 8;
        lVar2 = lVar2 + 1;
        (*param_2)(*(undefined8 *)(local_40 + lVar1),param_3);
      } while ((int)lVar2 < local_44);
    }
    FUN_0041ad60(local_40,"../crypto/objects/o_names.c",0x15c);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

