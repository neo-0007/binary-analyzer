
void ASN1_PCTX_set_cert_flags(ASN1_PCTX *p,ulong flags)

{
  *(ulong *)(p + 0x10) = flags;
  return;
}

