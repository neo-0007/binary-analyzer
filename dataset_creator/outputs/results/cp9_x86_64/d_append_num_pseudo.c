
void d_append_num(long param_1,undefined4 param_2)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char local_58 [40];
  long local_30;
  
  pcVar5 = local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ___sprintf_chk(local_58,1,0x19,"%d",param_2);
  sVar2 = strlen(local_58);
  if (sVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar5;
      if (lVar3 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar4 = 1;
        lVar3 = 0;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      pcVar5 = pcVar5 + 1;
      *(long *)(param_1 + 0x100) = lVar4;
      *(char *)(param_1 + lVar3) = cVar1;
      *(char *)(param_1 + 0x108) = cVar1;
      lVar3 = lVar4;
    } while (pcVar5 != local_58 + sVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

