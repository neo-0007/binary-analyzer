
bool ossl_asn1_type_set_octetstring_int
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_28;
  local_24 = 4;
  local_18 = 0;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_4;
  local_20 = param_3;
  lVar1 = ASN1_TYPE_pack_sequence(local_it_1,&local_38,&local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

