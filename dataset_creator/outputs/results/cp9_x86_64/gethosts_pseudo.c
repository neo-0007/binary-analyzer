
undefined8
gethosts(code *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
        long param_6,int *param_7,uint *param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *in_FS_OFFSET;
  char *local_70;
  undefined1 local_68 [40];
  long local_40;
  
  lVar1 = *in_FS_OFFSET;
  local_40 = in_FS_OFFSET[5];
  *param_8 = 0;
  local_70 = (char *)0x0;
  while( true ) {
    _dl_mcount_wrapper_check(param_1);
    iVar3 = (*param_1)(param_3,param_2,local_68,*param_5,param_5[1],lVar1 + -0x58,
                       *in_FS_OFFSET + -0x18,0,&local_70);
    *param_7 = iVar3;
    if (iVar3 != -2) break;
    iVar3 = (int)in_FS_OFFSET[-3];
    if (iVar3 != -1) goto LAB_00760147;
    if ((int)in_FS_OFFSET[-0xb] != 0x22) {
LAB_00760180:
      uVar4 = 0xb;
      goto LAB_00760109;
    }
    cVar2 = __libc_scratch_buffer_grow(param_5);
    if (cVar2 == '\0') {
LAB_00760104:
      uVar4 = 10;
LAB_00760109:
      if (local_40 == in_FS_OFFSET[5]) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
  }
  if (iVar3 + 1U < 2) {
    iVar3 = (int)in_FS_OFFSET[-3];
    if (iVar3 == -1) goto LAB_00760180;
LAB_00760147:
    if (iVar3 == 2) {
      *param_8 = 0xfffffffd;
      uVar4 = 0;
    }
    else {
      *param_8 = (uint)(iVar3 == 4);
      uVar4 = 0;
    }
    goto LAB_00760109;
  }
  if (iVar3 == 1) {
    cVar2 = convert_hostent_to_gaih_addrtuple(param_4,param_2,local_68,param_6);
    if (cVar2 == '\0') goto LAB_00760104;
    if ((local_70 != (char *)0x0) && (*(long *)(param_6 + 8) == 0)) {
      pcVar5 = strdup(local_70);
      if (pcVar5 != (char *)0x0) {
        *(char **)(param_6 + 8) = pcVar5;
        uVar4 = 0;
        goto LAB_00760109;
      }
      goto LAB_00760104;
    }
  }
  uVar4 = 0;
  goto LAB_00760109;
}

