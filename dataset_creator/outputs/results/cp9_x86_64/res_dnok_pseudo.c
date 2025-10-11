
uint res_dnok(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  u_char auStack_118 [264];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  pcVar3 = param_1;
  do {
    if (cVar1 == '\0') {
      uVar2 = ns_name_pton(param_1,auStack_118,0xff);
      uVar2 = ~uVar2 >> 0x1f;
LAB_007baa45:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    if (0x5d < (byte)(cVar1 - 0x21U)) {
      uVar2 = 0;
      goto LAB_007baa45;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  } while( true );
}

