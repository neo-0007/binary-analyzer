
uint FUN_007c4340(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined1 auStack_118 [264];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  pcVar3 = param_1;
  do {
    if (cVar1 == '\0') {
      uVar2 = FUN_007c84c0(param_1,auStack_118,0xff);
      uVar2 = ~uVar2 >> 0x1f;
LAB_007c4385:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    if (0x5d < (byte)(cVar1 - 0x21U)) {
      uVar2 = 0;
      goto LAB_007c4385;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  } while( true );
}

