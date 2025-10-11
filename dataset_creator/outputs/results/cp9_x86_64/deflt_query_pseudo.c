
undefined1 * deflt_query(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  switch(param_2) {
  default:
    return (undefined1 *)0x0;
  case 1:
    return deflt_digests;
  case 2:
    return exported_ciphers;
  case 3:
    return deflt_macs;
  case 4:
    return deflt_kdfs;
  case 5:
    return deflt_rands;
  case 10:
    return deflt_keymgmt;
  case 0xb:
    return deflt_keyexch;
  case 0xc:
    return deflt_signature;
  case 0xd:
    return deflt_asym_cipher;
  case 0xe:
    return deflt_asym_kem;
  case 0x14:
    return deflt_encoder;
  case 0x15:
    return deflt_decoder;
  case 0x16:
    return deflt_store;
  }
}

