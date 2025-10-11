
undefined8 FUN_004b0410(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00417730(param_1,0x11,&DAT_009023c0);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  iVar1 = *param_2;
joined_r0x004b043d:
  if (iVar1 == 0) {
    return 1;
  }
  switch(iVar1) {
  case 0x2a:
    if (*plVar2 == 0) {
      *plVar2 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
joined_r0x004b0568:
      param_2 = param_2 + 4;
      goto joined_r0x004b043d;
    }
    break;
  case 0x2b:
    if (plVar2[1] == 0) {
      plVar2[1] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004b0568;
    }
    break;
  case 0x2c:
    if (plVar2[5] != 0) break;
    plVar2[5] = *(long *)(param_2 + 2);
    iVar1 = param_2[4];
joined_r0x004b04b7:
    param_2 = param_2 + 4;
    goto joined_r0x004b043d;
  case 0x2d:
    if (plVar2[6] == 0) {
      plVar2[6] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004b04b7;
    }
    break;
  case 0x30:
    if (plVar2[3] == 0) {
      plVar2[3] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004b04b7;
    }
    break;
  case 0x31:
    if (plVar2[2] == 0) {
      plVar2[2] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004b04b7;
    }
    break;
  case 0x32:
    if (plVar2[4] != 0) break;
    plVar2[4] = *(long *)(param_2 + 2);
    iVar1 = param_2[4];
    goto joined_r0x004b0497;
  }
  iVar1 = param_2[4];
joined_r0x004b0497:
  param_2 = param_2 + 4;
  goto joined_r0x004b043d;
}

