
bool FUN_00545060(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_7c;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = false;
  if (*param_1 != 0) {
    iVar1 = FUN_00406090(param_1[1],local_78,&local_7c);
    if (iVar1 != 0) {
      iVar1 = FUN_004074f0(param_1[1],param_1[3]);
      if (iVar1 != 0) {
        iVar1 = FUN_00405f60(param_1[1],local_78,local_7c);
        if (iVar1 != 0) {
          iVar1 = FUN_00406090(param_1[1],param_2,param_3);
          bVar2 = iVar1 != 0;
          goto LAB_005450a9;
        }
      }
    }
    bVar2 = false;
  }
LAB_005450a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

