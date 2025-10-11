
void dlinfo_doit(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  switch((int)param_1[1]) {
  default:
                    /* WARNING: Subroutine does not return */
    _dl_signal_error(0,0,0,"unsupported dlinfo request");
  case 1:
    *(undefined8 *)param_1[2] = *(undefined8 *)(lVar1 + 0x30);
    return;
  case 2:
    *(long *)param_1[2] = lVar1;
    return;
  case 4:
    _dl_rtld_di_serinfo(lVar1,param_1[2],0);
    return;
  case 5:
    _dl_rtld_di_serinfo(lVar1,param_1[2],1);
    return;
  case 6:
    strcpy((char *)param_1[2],*(char **)(lVar1 + 0x350));
    return;
  case 9:
    puVar2 = (undefined8 *)param_1[2];
    *puVar2 = 0;
    *puVar2 = *(undefined8 *)(lVar1 + 0x460);
    return;
  case 10:
    break;
  }
  uVar3 = 0;
  if (*(long *)(lVar1 + 0x460) != 0) {
    uVar3 = _dl_tls_get_addr_soft();
  }
  *(undefined8 *)param_1[2] = uVar3;
  return;
}

