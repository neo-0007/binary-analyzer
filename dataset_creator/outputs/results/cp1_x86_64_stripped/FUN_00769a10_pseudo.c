
undefined8
FUN_00769a10(code *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,long param_6,int *param_7,uint *param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [40];
  long local_40;
  
  lVar4 = *in_FS_OFFSET;
  local_40 = in_FS_OFFSET[5];
  *param_8 = 0;
  local_70 = 0;
  while( true ) {
    FUN_0078e430(param_1);
    iVar2 = (*param_1)(param_3,param_2,local_68,*param_5,param_5[1],lVar4 + -0x58,
                       *in_FS_OFFSET + -0x18,0,&local_70);
    *param_7 = iVar2;
    if (iVar2 != -2) break;
    iVar2 = (int)in_FS_OFFSET[-3];
    if (iVar2 != -1) goto LAB_00769b47;
    if ((int)in_FS_OFFSET[-0xb] != 0x22) {
LAB_00769b80:
      uVar3 = 0xb;
      goto LAB_00769b09;
    }
    cVar1 = FUN_007a2dc0(param_5);
    if (cVar1 == '\0') {
LAB_00769b04:
      uVar3 = 10;
LAB_00769b09:
      if (local_40 == in_FS_OFFSET[5]) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
  }
  if (iVar2 + 1U < 2) {
    iVar2 = (int)in_FS_OFFSET[-3];
    if (iVar2 == -1) goto LAB_00769b80;
LAB_00769b47:
    if (iVar2 == 2) {
      *param_8 = 0xfffffffd;
      uVar3 = 0;
    }
    else {
      *param_8 = (uint)(iVar2 == 4);
      uVar3 = 0;
    }
    goto LAB_00769b09;
  }
  if (iVar2 == 1) {
    cVar1 = FUN_007697f0(param_4,param_2,local_68,param_6);
    if (cVar1 == '\0') goto LAB_00769b04;
    if ((local_70 != 0) && (*(long *)(param_6 + 8) == 0)) {
      lVar4 = FUN_007128a0();
      if (lVar4 != 0) {
        *(long *)(param_6 + 8) = lVar4;
        uVar3 = 0;
        goto LAB_00769b09;
      }
      goto LAB_00769b04;
    }
  }
  uVar3 = 0;
  goto LAB_00769b09;
}

