
void BN_RECP_CTX_init(BN_RECP_CTX *recp)

{
  (recp->N).d = (ulong *)0x0;
  (recp->N).top = 0;
  (recp->N).dmax = 0;
  *(undefined1 (*) [16])&(recp->N).neg = (undefined1  [16])0x0;
  (recp->Nr).top = 0;
  (recp->Nr).dmax = 0;
  (recp->Nr).neg = 0;
  (recp->Nr).flags = 0;
  recp->num_bits = 0;
  recp->shift = 0;
  recp->flags = 0;
  *(undefined4 *)&recp->field_0x3c = 0;
  bn_init();
  bn_init(&recp->Nr);
  return;
}

