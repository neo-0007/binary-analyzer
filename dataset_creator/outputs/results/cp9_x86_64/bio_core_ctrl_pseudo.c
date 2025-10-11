
long bio_core_ctrl(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = ossl_lib_ctx_get_data(*param_1,0x11,bio_core_globals_method);
  if ((lVar3 == 0) || (pcVar1 = *(code **)(lVar3 + 0x20), pcVar1 == (code *)0x0)) {
    lVar3 = -1;
  }
  else {
    uVar4 = BIO_get_data(param_1);
    iVar2 = (*pcVar1)(uVar4,param_2,param_3,param_4);
    lVar3 = (long)iVar2;
  }
  return lVar3;
}

