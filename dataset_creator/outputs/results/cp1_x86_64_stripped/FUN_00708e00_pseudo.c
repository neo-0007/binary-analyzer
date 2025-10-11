
char * FUN_00708e00(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = *(int **)(in_FS_OFFSET + -0x38);
  if (piVar1 == (int *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else if (piVar1 == (int *)0xffffffffffffffff) {
    *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
    pcVar4 = "out of memory";
  }
  else {
    pcVar4 = *(char **)(piVar1 + 4);
    if (pcVar4 != (char *)0x0) {
      if (*(char *)((long)piVar1 + 5) == '\0') {
        if (*piVar1 == 0) {
          uVar3 = FUN_006e27f0(&DAT_0083ed80,pcVar4,5);
          pcVar4 = "";
          if (**(char **)(piVar1 + 2) != '\0') {
            pcVar4 = ": ";
          }
          iVar2 = FUN_006f4ae0(&local_28,"%s%s%s",*(char **)(piVar1 + 2),pcVar4,uVar3);
          *(undefined1 *)((long)piVar1 + 5) = 1;
        }
        else {
          *(int *)(in_FS_OFFSET + -0x58) = *piVar1;
          uVar3 = FUN_006e27f0(&DAT_0083ed80,pcVar4,5);
          pcVar4 = "";
          if (**(char **)(piVar1 + 2) != '\0') {
            pcVar4 = ": ";
          }
          iVar2 = FUN_006f4ae0(&local_28,"%s%s%s: %m",*(char **)(piVar1 + 2),pcVar4,uVar3);
          *(int *)(in_FS_OFFSET + -0x58) = *piVar1;
          *(undefined1 *)((long)piVar1 + 5) = 1;
        }
        if (iVar2 < 0) {
          pcVar4 = *(char **)(piVar1 + 4);
        }
        else {
          if ((char)piVar1[1] == '\x01') {
            FUN_00784300(*(undefined8 *)(piVar1 + 4));
          }
          else if ((char)piVar1[1] == '\x02') {
            FUN_007104f0(*(undefined8 *)(piVar1 + 4));
          }
          *(undefined1 *)(piVar1 + 1) = 2;
          *(char **)(piVar1 + 4) = local_28;
          pcVar4 = local_28;
        }
      }
      else {
        *(undefined8 *)(in_FS_OFFSET + -0x38) = 0;
        if ((char)piVar1[1] == '\x01') {
          FUN_00784300(pcVar4);
        }
        else if ((char)piVar1[1] == '\x02') {
          FUN_007104f0(pcVar4);
        }
        FUN_007104f0(piVar1);
        pcVar4 = (char *)0x0;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return pcVar4;
}

