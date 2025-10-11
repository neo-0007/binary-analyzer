
undefined8 nsseq_cb(int param_1,undefined8 *param_2)

{
  ASN1_OBJECT *pAVar1;
  
  if (param_1 != 1) {
    return 1;
  }
  param_2 = (undefined8 *)*param_2;
  pAVar1 = OBJ_nid2obj(0x4f);
  *param_2 = pAVar1;
  return 1;
}

