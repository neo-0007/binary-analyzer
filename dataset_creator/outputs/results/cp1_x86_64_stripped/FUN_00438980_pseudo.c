
void FUN_00438980(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0093fdb4 == 0) {
    DAT_0093fdb4 = FUN_0051ece0();
  }
  FUN_0051f420();
  FUN_0051f540("../engines/e_afalg_err.c",0x45,"ERR_AFALG_error");
  FUN_0051f8f0(DAT_0093fdb4,param_1,0);
  FUN_0051f540("../engines/e_afalg.c",param_2,0);
  return;
}

