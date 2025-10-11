
undefined8 EC_POINT_set_compressed_coordinates(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x88) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_oct.c",0x1d,"EC_POINT_set_compressed_coordinates");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004e83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x88))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        uVar2 = ossl_ec_GF2m_simple_set_compressed_coordinates();
        return uVar2;
      }
      uVar2 = ossl_ec_GFp_simple_set_compressed_coordinates();
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_oct.c",0x21,"EC_POINT_set_compressed_coordinates");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

