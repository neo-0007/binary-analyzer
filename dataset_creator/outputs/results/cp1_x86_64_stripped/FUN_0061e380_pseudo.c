
undefined8 FUN_0061e380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined1 local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  local_80 = param_3;
  while( true ) {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar3) break;
    uVar2 = FUN_004364a0(param_2,iVar3);
    FUN_004a0440(local_78,0x50,uVar2);
    FUN_0059ce00(0,local_78,&local_80);
    iVar3 = iVar3 + 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

