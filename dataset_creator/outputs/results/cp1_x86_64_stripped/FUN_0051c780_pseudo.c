
void FUN_0051c780(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_38,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        while( true ) {
          iVar2 = (**(code **)(param_1 + 0x50))
                            (param_1,&local_40,0,*(undefined4 *)(local_38 + lVar3));
          if (iVar2 == 0) break;
          lVar3 = lVar3 + 4;
          FUN_004a17d0(local_40);
          if (lVar3 == (long)iVar1 * 4) goto LAB_0051c803;
        }
        lVar3 = lVar3 + 4;
      } while (lVar3 != (long)iVar1 * 4);
    }
  }
LAB_0051c803:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

