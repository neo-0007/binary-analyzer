
void dh_cmp_parameters(long param_1,long param_2)

{
  ossl_ffc_params_cmp(*(long *)(param_1 + 0x20) + 8,*(long *)(param_2 + 0x20) + 8,
                      *(undefined1 **)(param_1 + 8) != ossl_dhx_asn1_meth);
  return;
}

