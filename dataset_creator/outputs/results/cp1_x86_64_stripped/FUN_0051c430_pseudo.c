
void FUN_0051c430(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4[1] == 0) {
    iVar4 = 0;
    while( true ) {
      iVar2 = FUN_00436480(param_2);
      if (iVar2 <= iVar4) break;
      lVar3 = FUN_004364a0(param_2,iVar4);
      (**(code **)(lVar3 + 0x50))(lVar3,&local_48,0,param_1);
      if (local_48 != 0) {
        uVar1 = *(undefined8 *)(local_48 + 0x10);
        iVar2 = thunk_FUN_007129d0(uVar1);
        if ((int)param_4[3] == iVar2) {
          iVar2 = FUN_0041ca00(uVar1,param_4[2]);
          if (iVar2 == 0) {
            *param_4 = lVar3;
            param_4[1] = local_48;
            break;
          }
        }
      }
      iVar4 = iVar4 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

