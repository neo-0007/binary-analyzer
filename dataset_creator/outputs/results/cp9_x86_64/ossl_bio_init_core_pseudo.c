
undefined8 ossl_bio_init_core(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)ossl_lib_ctx_get_data(param_1,0x11,bio_core_globals_method);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  iVar1 = *param_2;
joined_r0x004ad3bd:
  if (iVar1 == 0) {
    return 1;
  }
  switch(iVar1) {
  case 0x2a:
    if (*plVar2 == 0) {
      *plVar2 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
joined_r0x004ad4e8:
      param_2 = param_2 + 4;
      goto joined_r0x004ad3bd;
    }
    break;
  case 0x2b:
    if (plVar2[1] == 0) {
      plVar2[1] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004ad4e8;
    }
    break;
  case 0x2c:
    if (plVar2[5] != 0) break;
    plVar2[5] = *(long *)(param_2 + 2);
    iVar1 = param_2[4];
joined_r0x004ad437:
    param_2 = param_2 + 4;
    goto joined_r0x004ad3bd;
  case 0x2d:
    if (plVar2[6] == 0) {
      plVar2[6] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004ad437;
    }
    break;
  case 0x30:
    if (plVar2[3] == 0) {
      plVar2[3] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004ad437;
    }
    break;
  case 0x31:
    if (plVar2[2] == 0) {
      plVar2[2] = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      goto joined_r0x004ad437;
    }
    break;
  case 0x32:
    if (plVar2[4] != 0) break;
    plVar2[4] = *(long *)(param_2 + 2);
    iVar1 = param_2[4];
    goto joined_r0x004ad417;
  }
  iVar1 = param_2[4];
joined_r0x004ad417:
  param_2 = param_2 + 4;
  goto joined_r0x004ad3bd;
}

