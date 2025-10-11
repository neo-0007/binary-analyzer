
bool add_prefixlist(undefined8 *param_1,long *param_2,byte *param_3,char *param_4,char *param_5,
                   undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  uintmax_t uVar4;
  uintmax_t uVar5;
  undefined8 *puVar6;
  bool bVar7;
  long in_FS_OFFSET;
  char *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  pcVar3 = strchr(param_4,0x2f);
  if (pcVar3 == (char *)0x0) {
    *param_6 = 0;
    iVar2 = inet_pton(10,param_4,&local_58);
    if ((iVar2 != 0) && (*local_60 == '\0')) {
      uVar4 = 0x80;
      goto LAB_0075fd52;
    }
  }
  else {
    *pcVar3 = '\0';
    *param_6 = pcVar3 + 1;
    iVar2 = inet_pton(10,param_4,&local_58);
    if ((((iVar2 != 0) && (uVar4 = strtouq(pcVar3 + 1,&local_60,10), uVar4 != 0xffffffffffffffff))
        && (*local_60 == '\0')) && (uVar4 < 0x81)) {
LAB_0075fd52:
      bVar7 = true;
      uVar5 = strtouq(param_5,&local_60,10);
      if (uVar5 == 0xffffffffffffffff) goto LAB_0075fcba;
      bVar7 = *local_60 == '\0' && uVar5 < 0x80000000;
      if (*local_60 == '\0' && uVar5 < 0x80000000) {
        puVar6 = (undefined8 *)malloc(0x20);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = false;
        }
        else {
          uVar1 = *param_1;
          *param_1 = puVar6;
          *(int *)(puVar6 + 2) = (int)uVar4;
          *puVar6 = local_58;
          puVar6[1] = uStack_50;
          *(int *)((long)puVar6 + 0x14) = (int)uVar5;
          puVar6[3] = uVar1;
          *param_2 = *param_2 + 1;
          *param_3 = *param_3 | uVar4 == 0;
        }
        goto LAB_0075fcba;
      }
    }
  }
  bVar7 = true;
LAB_0075fcba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar7;
}

