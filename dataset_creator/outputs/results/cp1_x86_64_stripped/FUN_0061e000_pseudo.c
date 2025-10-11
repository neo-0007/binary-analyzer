
void FUN_0061e000(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    *(undefined ***)(param_1 + 0x28) = &PTR_thunk_FUN_004ccc50_0093d440;
    return;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_conf.c",0x212,"X509V3_set_conf_lhash");
  FUN_0051f8f0(0x22,0xc0102,0);
  return;
}

