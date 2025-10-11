
undefined8 SCT_set_signature_nid(long param_1,int param_2)

{
  if (param_2 == 0x29c) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x104;
    return 1;
  }
  if (param_2 == 0x31a) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x304;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ct/ct_sct.c",0x8a,"SCT_set_signature_nid");
  ERR_set_error(0x32,0x65,0);
  return 0;
}

