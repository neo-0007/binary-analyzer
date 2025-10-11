
uint CONF_modules_load_file_ex(undefined8 param_1,char *param_2,char *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  CONF *conf;
  long lVar3;
  ulong uVar4;
  char *file;
  bool bVar5;
  
  if (param_2 == (char *)0x0) {
    file = CONF_get1_default_config_file();
    if (file == (char *)0x0) {
      conf = (CONF *)0x0;
      bVar5 = true;
      uVar2 = 0;
    }
    else {
      ERR_set_mark();
      conf = (CONF *)NCONF_new_ex(param_1,0);
      if (conf != (CONF *)0x0) goto LAB_004c1475;
      bVar5 = true;
      uVar2 = 0;
    }
LAB_004c1591:
    CRYPTO_free(file);
LAB_004c14b8:
    NCONF_free(conf);
    if (((param_4 & 2) == 0) || (!bVar5)) {
      if ((int)uVar2 < 1) {
LAB_004c1540:
        ERR_clear_last_mark();
        return uVar2;
      }
      goto LAB_004c14d4;
    }
  }
  else {
    ERR_set_mark();
    conf = (CONF *)NCONF_new_ex(param_1,0);
    file = param_2;
    if (conf != (CONF *)0x0) {
LAB_004c1475:
      iVar1 = NCONF_load(conf,file,(long *)0x0);
      if (iVar1 < 1) {
        bVar5 = true;
        uVar2 = 0;
        if ((param_4 & 0x10) != 0) {
          uVar4 = ERR_peek_last_error();
          uVar2 = (uint)uVar4 & 0x7fffffff;
          if ((uVar4 & 0x80000000) == 0) {
            uVar2 = (uint)uVar4 & 0x7fffff;
          }
          uVar2 = (uint)(uVar2 == 0x72);
        }
      }
      else {
        uVar2 = CONF_modules_load(conf,param_3,param_4);
        lVar3 = _CONF_get_number(conf,(char *)0x0,"config_diagnostics");
        bVar5 = lVar3 == 0;
      }
      if (param_2 == (char *)0x0) goto LAB_004c1591;
      goto LAB_004c14b8;
    }
    NCONF_free((CONF *)0x0);
    if ((param_4 & 2) == 0) {
      uVar2 = 0;
      goto LAB_004c1540;
    }
  }
  uVar2 = 1;
LAB_004c14d4:
  ERR_pop_to_mark();
  return uVar2;
}

