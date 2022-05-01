//plot some distributions for signal and background in stack graphs 
void format_canvas(TCanvas *c) {
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetTickx(1);
  c->SetTicky(1);
  c->SetLeftMargin(0.18);
  c->SetRightMargin(0.05);
  c->SetTopMargin(0.05);
  c->SetBottomMargin(0.15);
  c->SetFrameFillStyle(0);
  c->SetFrameBorderMode(0);
  c->SetFrameFillStyle(0);
  c->SetFrameBorderMode(0);
}
void plot_all_stack_s() {
    const int nsample=34;
    TString fileNames[nsample] = {  "new_TTToSemiLeptonic_TuneCP5_13TeV-powheg.root",
                            "new_TTTo2L2Nu_TuneCP5_13TeV-powheg.root",
                            "new_TTToHadronic_TuneCP5_13TeV-powheg.root",

                            "new_DYJetsToLL_M-50_HT-70to100_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                            "new_DYJetsToLL_M-50_HT-100to200_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                            "new_DYJetsToLL_M-50_HT-200to400_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                            "new_DYJetsToLL_M-50_HT-400to600_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                            "new_DYJetsToLL_M-50_HT-600to800_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                            "new_DYJetsToLL_M-50_HT-800to1200_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                            "new_DYJetsToLL_M-50_HT-1200to2500_TuneCP5_PSweights_13TeV-madgraphMLM.root",                           
                            "new_DYJetsToLL_M-50_HT-2500toInf_TuneCP5_PSweights_13TeV-madgraphMLM.root",
                        
                            "new_ST_s-channel_4f_leptonDecays_TuneCP5_13TeV-amcatnlo.root",
                            "new_ST_t-channel_antitop_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin.root",
                            "new_ST_t-channel_top_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin.root",
                            "new_ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV-powheg.root",
                            "new_ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV-powheg.root",                                                                               
                            
                            "new_WWTo1L1Nu2Q_TuneCP5_13TeV-amcatnloFXFX.root",
                            "new_ZZTo2Q2L_mllmin4p0_TuneCP5_13TeV-amcatnloFXFX.root",
                            "new_WZTo1L1Nu2Q_TuneCP5_13TeV-amcatnloFXFX.root",
                            
                            "new_WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM.root",
                            "new_WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM.root",
                            "new_WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM.root",
                            "new_WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM.root",
                            "new_WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM.root",
                            "new_WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM.root",
                            "new_WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM.root",

                            "new_QCD_HT100to200_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT200to300_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT300to500_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT500to700_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT700to1000_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT1000to1500_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT1500to2000_TuneCP5_PSWeights_13TeV-madgraphMLM.root",
                            "new_QCD_HT2000toInf_TuneCP5_PSWeights_13TeV-madgraphMLM.root",};
    //TString legend[] = {"wrong reco", "non reco", "background", "right reco"};
     Float_t cross_sections[nsample]={366.91, 89.05, 377.96,
                                    169.9, 147.4, 41.0, 5.7, 1.4, 0.63, 0.15, 0.0036,
                                    3.36, 136.02, 80.95, 35.6, 35.6,
                                    45.68, 4.478, 11.66,
                                    1345.7, 359.7, 48.9, 12.1, 5.5, 1.3, 0.032,
                                    27990000, 1712000, 347700, 32100, 6831, 1207, 119.9, 25.2};
    Float_t K_Factor[nsample]={1.0, 1.0, 1.0,
                                1.23,1.23,1.23,1.23,1.23,1.23,1.23,1.23,
                                1.0,1.0,1.0,1.0,1.0,
                                1.0,1.0,1.0,
                                1.21,1.21,1.21,1.21,1.21,1.21,1.21,
                                1.0, 1.0, 1.0,1.0, 1.0, 1.0,1.0, 1.0,};
    float lumi=137.1;                       
    TString legend1[] = {"tt background","non reco","wrong reco","right reco"};
    TString legend2[] = {"tt","DY","single top","VV","V+jets","QCD"};
    TString xvars[] = {"rapidity_tt", "mass_tt","likelihood","rectop_pt","neutrino_pz","jet_num","mass_thad","mass_tlep"};
    TString xtitle[] = {"#Deltay_{t#bar{t}}", "M_{t#bar{t}} [GeV]","likelihood","P_{T}(t) [GeV]","P_{z}^{#nu} [GeV]","njet","M_{thad}","M_{tlep}"};
    TString title[] = {"detlay", "mtt","likelihood","pt","neutrino_pz","jet_num","mass_thad","mass_tlep"};
    int edge[]={0,3,11,16,19,26,34};         
    float xlow[] = {-5.0, 0.0, 15.5, 0.0, -1100.0,5,50,100};
    float xup[] = {5.0, 2000.0, 19.0, 800.0, 1100.0,20,300,300};
    int color[] = {2, kMagenta, 4, 226, 6, kOrange + 2, 3, kYellow, 93};
    int xbins[] = {40, 50, 70, 50,110,15,25,20};
    int color1[] = {2, kMagenta, 4, 226};
    int color2[] = {6, kOrange + 2, 3, kYellow, 93};
    TString cuts[] = {"(tt_efficiency==0)","(tt_efficiency==1)","(tt_efficiency==2)", "(tt_efficiency==3)"};
    TH1D *h1[8], *nmc, *hist;
    TString condition="((mass_tt<=2000.0)&&(abs(rapidity_tt)<=5.0)&&(likelihood <19.0))";
    for(int i=0;i<nsample;i++)
        fileNames[i]=fileNames[i].ReplaceAll(".root","_*.root");
    for (int i = 0; i < 5; i++) {                         // loop over variables
        auto c1 = new TCanvas("c1", "c1", 8, 30, 600, 600); // temporary canvas
        auto c2 = new TCanvas("c2", "c2", 8, 30, 600, 650); // draw on this canvas
        format_canvas(c2);
        THStack *hstack = new THStack("hstack", "");
        c2->cd();
        TLegend *leg = new TLegend(0.65, .60, 0.95, .90);
        leg->SetNColumns(1);
        leg->SetColumnSeparation(0.5);
        leg->SetEntrySeparation(0.0);
        leg->SetBorderSize(0);
        leg->SetTextFont(42);
        leg->SetTextSize(0.035);
        leg->SetLineColor(1);
        leg->SetLineStyle(1);
        leg->SetLineWidth(1);
        leg->SetFillColor(0);
        leg->SetFillStyle(0);
        for (int k = 4; k >= 0; k--) { // loop over files
            if(k==0){
                for(int m=0;m<4;m++){ 
                    if(m==0){
                        for(int num=edge[k];num<edge[k+1];num++){
                            TChain* tree=new TChain("mytree");
                            TChain* tree1=new TChain("rawtree"); 
                            tree->Add(fileNames[num]);
                            tree1->Add(fileNames[num]);
                            nmc=new TH1D("nmc","",50,0,100);
                            nmc->Sumw2();
                            c1->cd();
                            tree1->Draw("nJet>>nmc","Generator_weight");    
                            float weight1=cross_sections[num]*lumi/(nmc->GetSumOfWeights())*K_Factor[num]*1000;
                            hist=new TH1D("hist", "", xbins[i], xlow[i], xup[i]);
                            hist->Sumw2();
                            TString weight=Form("%f*Generator_weight",weight1);
                            c1->cd();
                            if(num==0){
                                tree->Draw(xvars[i] + ">>hist",  weight+"*"+cuts[m]+"*"+condition);
                                h1[4+m]=(TH1D*)hist->Clone();
                                h1[4+m]->SetName(legend1[m]);
                            }
                            else{
                                tree->Draw(xvars[i] + ">>hist", weight+"*"+condition);
                                h1[4+m]->Add(hist);
                            }
                            delete hist;
                            delete nmc;
                            delete tree;
                            delete tree1;
                        }
                        h1[4+m]->SetFillColor(color1[m]);
                        hstack->Add(h1[4+m]);
                        
                    }
                    else{
                        TChain* tree=new TChain("mytree");
                        TChain* tree1=new TChain("rawtree"); 
                        tree->Add(fileNames[edge[k]]);
                        tree1->Add(fileNames[edge[k]]);
                        nmc=new TH1D("nmc","",50,0,100);
                        nmc->Sumw2();
                        c1->cd();
                        tree1->Draw("nJet>>nmc","Generator_weight");    
                        float weight1=cross_sections[0]*lumi/(nmc->GetSumOfWeights())*K_Factor[0]*1000;
                        h1[4+m]=new TH1D(legend1[m], "", xbins[i], xlow[i], xup[i]);
                        h1[4+m]->Sumw2();
                        TString weight=Form("%f*Generator_weight",weight1);
                        c1->cd();
                        tree->Draw(xvars[i] + ">>"+legend1[m],  weight+"*"+"("+cuts[m]+")"+"*"+condition);
                        h1[4+m]->SetFillColor(color1[m]);
                        hstack->Add(h1[4+m]);
                        //c2->cd();
                        //leg->AddEntry(h1[4+m], legend1[m], "f");
                        delete tree;
                        delete tree1;
                        delete nmc;
                    }
                }
            }
            else{
                for(int j=edge[k];j<edge[k+1];j++){// loop over files
                    TChain* tree=new TChain("mytree");
                    TChain* tree1=new TChain("rawtree"); 
                    tree->Add(fileNames[j]);
                    tree1->Add(fileNames[j]);
                    nmc=new TH1D("nmc","",50,0,100);
                    nmc->Sumw2();
                    c1->cd();
                    tree1->Draw("nJet>>nmc","Generator_weight");    
                    float weight1=cross_sections[j]*lumi/(nmc->GetSumOfWeights())*K_Factor[j]*1000;
                    hist=new TH1D("hist", "", xbins[i], xlow[i], xup[i]);
                    hist->Sumw2();
                    TString weight=Form("%f*Generator_weight",weight1);
                    c1->cd();
                    tree->Draw(xvars[i] + ">>hist", weight+"*"+condition);
                    if(j==edge[k]){
                        h1[k-1]=(TH1D*)hist->Clone();
                        h1[k-1]->SetName(legend2[k]);
                    }
                    else
                        h1[k-1]->Add(hist);
                    delete tree;
                    delete tree1;
                    delete nmc;
                    delete hist;
                }
                h1[k-1]->SetFillColor(color2[k]);
                hstack->Add(h1[k-1]);
                //c2->cd();
                //leg->AddEntry(h1, legend2[k], "f");
            }
        }
        c2->cd();
        hstack->Draw("hist");
        hstack->GetXaxis()->SetNdivisions(505);
        hstack->GetXaxis()->SetLabelFont(42);
        hstack->GetXaxis()->SetLabelOffset(0.007);
        hstack->GetXaxis()->SetLabelSize(0.04);
        hstack->GetXaxis()->SetTitleSize(0.06);
        hstack->GetXaxis()->SetTitleOffset(0.9);
        hstack->GetXaxis()->SetTitleFont(42);
        hstack->GetYaxis()->SetNdivisions(505);
        hstack->GetYaxis()->SetLabelFont(42);
        hstack->GetYaxis()->SetLabelOffset(0.007);
        hstack->GetYaxis()->SetLabelSize(0.04);
        hstack->GetYaxis()->SetTitleSize(0.04);
        hstack->GetYaxis()->SetTitleOffset(1.9);
        hstack->GetYaxis()->SetTitleFont(42);
        hstack->GetXaxis()->CenterTitle();
        hstack->GetYaxis()->CenterTitle();
        hstack->GetXaxis()->SetTitle(xtitle[i]);
        hstack->GetYaxis()->SetTitle("Events/bin");
        hstack->SetMaximum(hstack->GetMaximum() * 1.3);
        c2->cd();
        for(int k=3;k>=0;k--)
            leg->AddEntry(h1[4+k], legend1[k], "f");
        for(int k=0;k<4;k++)
            leg->AddEntry(h1[k], legend2[k+1], "f");
        leg->Draw("same");
        //c2->SetLogy();
        c2->Print(title[i] + ".pdf");
        for(int k=0;k<8;k++)
            delete h1[k];
        delete hstack;
        delete c1;
        delete c2;
        
    }
}
