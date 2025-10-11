
void FUN_0061dde0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_6;
    *(undefined8 *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    *(undefined8 *)(param_1 + 6) = param_4;
    *(undefined8 *)(param_1 + 8) = param_5;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    return;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_conf.c",0x1c2,"X509V3_set_ctx");
  FUN_0051f8f0(0x22,0xc0102,0);
  return;
}

