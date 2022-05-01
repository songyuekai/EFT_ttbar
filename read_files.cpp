void read_files(){
    const int nsample=34;
  	TString fileNames[nsample] = {	"new_TTToSemiLeptonic_TuneCP5_13TeV-powheg.root",
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
    TString processNames[nsample] = {"TTToSemiLeptonic",
                                    "TTTo2L2Nu",
                                    "TTToHadronic",

                                    "DYJetsToLL_M-50_HT-70to100",
                                    "DYJetsToLL_M-50_HT-100to200",
                                    "DYJetsToLL_M-50_HT-200to400",
                                    "DYJetsToLL_M-50_HT-400to600",
                                    "DYJetsToLL_M-50_HT-600to800",
                                    "DYJetsToLL_M-50_HT-800to1200",
                                    "DYJetsToLL_M-50_HT-1200to2500",                           
                                    "DYJetsToLL_M-50_HT-2500toInf",
                                
                                    "ST_s-channel_4f_leptonDecays",
                                    "ST_t-channel_antitop_4f_InclusiveDecays",
                                    "ST_t-channel_top_4f_InclusiveDecays",
                                    "ST_tW_antitop_5f_inclusiveDecays",
                                    "ST_tW_top_5f_inclusiveDecays",                                                                               
                                    
                                    "WWTo1L1Nu2Q",
                                    "ZZTo2Q2L",
                                    "WZTo1L1Nu2Q",
                                    
                                    "WJetsToLNu_HT-100To200",
                                    "WJetsToLNu_HT-200To400",
                                    "WJetsToLNu_HT-400To600",
                                    "WJetsToLNu_HT-600To800",
                                    "WJetsToLNu_HT-800To1200",
                                    "WJetsToLNu_HT-1200To2500",
                                    "WJetsToLNu_HT-2500ToInf",

                                    "QCD_HT100to200",
                                    "QCD_HT200to300",
                                    "QCD_HT300to500",
                                    "QCD_HT500to700",
                                    "QCD_HT700to1000",
                                    "QCD_HT1000to1500",
                                    "QCD_HT1500to2000",
                                    "QCD_HT2000toInf",};
    TString process[6]={"ttbar","DY","single_top","VV","V+Jets","QCD",};
    double cross_sections[nsample]={366.91, 89.05, 377.96,
									169.9, 147.4, 41.0, 5.7, 1.4, 0.63, 0.15, 0.0036,
									3.36, 136.02, 80.95, 35.6, 35.6,
									45.68, 4.478, 11.66,
									1345.7, 359.7, 48.9, 12.1, 5.5, 1.3, 0.032,
								    27990000, 1712000, 347700, 32100, 6831, 1207, 119.9, 25.2};
	double K_Factor[nsample]={1.0, 1.0, 1.0,
								1.23,1.23,1.23,1.23,1.23,1.23,1.23,1.23,
								1.0,1.0,1.0,1.0,1.0,
								1.0,1.0,1.0,
								1.21,1.21,1.21,1.21,1.21,1.21,1.21,
								1.0, 1.0, 1.0,1.0, 1.0, 1.0,1.0, 1.0,};
    int edge[]={0,3,11,16,19,26,34};
    double lumi=137.1;
    Double_t mtt_edges[9]={0,370,420,500,600,700,800,950,2000};
    Double_t ytt_edges[10]={-5.0,-1.4,-0.9,-0.5,-0.15,0.15,0.5,0.9,1.4,5.0};
    const int xbin=8, ybin=9;
    double expected_num;
    double expected_4jets;
    double expected_3jets;
    double efficiency_all,efficiency_3jets,efficiency_4jets;
    double num_all,num_4jets,num_3jets,num_MC;
    double sigma_3jets,sigma_4jets,sigma_all;
    double Sigma_3jets,Sigma_4jets,Sigma_all;
    double section;
    TString condition="(likelihood<19.0)";
    ofstream oFile;
    oFile.open("Events.csv", ios::out | ios::trunc);
    oFile.setf(ios::fixed, ios::floatfield);
    oFile << "process" << "," << "cross_section" << "," << "expected_number" << "," << ">=4jets" <<","<<"3jets"<<","<<"efficiency(%)"<<",";
    oFile << "efficiency(>=4jets)(%)"<<","<<"efficiency(3jets)(%)"<<",";
    oFile << "cutted_number" <<","<< "cutted_number(>=4jets)"<<"," << "cutted_number(3jets)" <<","<< "numnber_of_MC"<<endl;
    TH2D* ncut4;
    TH2D* ncut3;
    TH1D* nmc;
    for(int i=0;i<26;i++){
        TChain* tree=new TChain("mytree");
        TChain* tree1=new TChain("rawtree"); 
        fileNames[i]=fileNames[i].ReplaceAll(".root","_*.root");
        tree->Add(fileNames[i]);
        tree1->Add(fileNames[i]);
        //ncut4=new TH1D("ncut4","",50,0,2000);
        //ncut3=new TH1D("ncut3","",50,0,2000);
        ncut4=new TH2D("ncut4","",xbin,mtt_edges, ybin, ytt_edges);
        ncut3=new TH2D("ncut3","",xbin,mtt_edges, ybin, ytt_edges);
        nmc=new TH1D("nmc","",50,0,100);
        ncut4->Sumw2();
        ncut3->Sumw2();
        nmc->Sumw2();
        tree->Draw("rapidity_tt:mass_tt>>ncut4","(jet_num>=4)*Generator_weight*"+condition);
        tree->Draw("rapidity_tt:mass_tt>>ncut3","(jet_num==3)*Generator_weight*"+condition);
        tree1->Draw("nJet>>nmc","Generator_weight");
        expected_num=cross_sections[i]*lumi*(ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
        expected_4jets=cross_sections[i]*lumi*(ncut4->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
        expected_3jets=cross_sections[i]*lumi*(ncut3->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
        efficiency_all=1.0*(ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights())/nmc->GetSumOfWeights()*100;
        efficiency_4jets=1.0*ncut4->GetSumOfWeights()/nmc->GetSumOfWeights()*100;
        efficiency_3jets=1.0*ncut3->GetSumOfWeights()/nmc->GetSumOfWeights()*100;
        num_all=ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights();
        num_4jets=ncut4->GetSumOfWeights();
        num_3jets=ncut3->GetSumOfWeights();
        num_MC=nmc->GetSumOfWeights();
        oFile<<processNames[i]<<","<<Form("%f",cross_sections[i])<<",";
        oFile<<setprecision(2)<<expected_num<<","<<expected_4jets<<","<<expected_3jets<<",";
        oFile<<setprecision(3)<<efficiency_all<<","<<efficiency_4jets<<","<<efficiency_3jets<<",";
        oFile<<num_all<<","<<num_4jets<<","<<num_3jets<<","<<num_MC<<endl;
        delete ncut3;
        delete ncut4;
        delete nmc;
    }
    for(int i=0;i<5;i++)
        oFile<<endl;    
    oFile << "process" << "," << "cross_section" << "," << "expected_number" << "," << ">=4jets" <<","<<"3jets"<<","<<"efficiency(%)"<<",";
    oFile << "efficiency(>=4jets)(%)"<<","<<"efficiency(3jets)(%)"<<",";
    oFile << "cutted_number" <<","<< "cutted_number(>=4jets)"<<"," << "cutted_number(3jets)" <<","<< "numnber_of_MC"<<endl;      
    //sum of same processes
                  
    for(int k=0;k<5;k++){
        for(int i=edge[k];i<edge[k+1];i++){
            TChain* tree=new TChain("mytree");
            TChain* tree1=new TChain("rawtree"); 
            tree->Add(fileNames[i]);
            tree1->Add(fileNames[i]);
            ncut4=new TH2D("ncut4","",xbin,mtt_edges, ybin, ytt_edges);
            ncut3=new TH2D("ncut3","",xbin,mtt_edges, ybin, ytt_edges);
            //ncut4=new TH1D("ncut4","",50,0,2000);
            //ncut3=new TH1D("ncut3","",50,0,2000);
            nmc=new TH1D("nmc","",50,0,100);
            ncut4->Sumw2();
            ncut3->Sumw2();
            nmc->Sumw2();
            tree->Draw("rapidity_tt:mass_tt>>ncut4","(jet_num>=4)*Generator_weight*"+condition);
            tree->Draw("rapidity_tt:mass_tt>>ncut3","(jet_num==3)*Generator_weight*"+condition);
            tree1->Draw("nJet>>nmc","Generator_weight");
            if(i==edge[k]){
                expected_num=cross_sections[i]*lumi*(ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
                expected_4jets=cross_sections[i]*lumi*(ncut4->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
                expected_3jets=cross_sections[i]*lumi*(ncut3->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
                section=cross_sections[i];
                num_all=ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights();
                num_4jets=ncut4->GetSumOfWeights();
                num_3jets=ncut3->GetSumOfWeights();
                num_MC=nmc->GetSumOfWeights();
                sigma_3jets=sqrt(ncut3->GetSumOfWeights() )*cross_sections[i]*lumi*K_Factor[i]*1000/nmc->GetSumOfWeights();
                Sigma_3jets=sigma_3jets*sigma_3jets;
                sigma_4jets=sqrt(ncut4->GetSumOfWeights())*cross_sections[i]*lumi*K_Factor[i]*1000/nmc->GetSumOfWeights();
                Sigma_4jets=sigma_4jets*sigma_4jets;
                sigma_all=sqrt(ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights())*cross_sections[i]*lumi*K_Factor[i]*1000/tree1->GetEntries();
                Sigma_all=sigma_all*sigma_all;
            }
            else{               
                expected_num+=cross_sections[i]*lumi*(ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
                expected_4jets+=cross_sections[i]*lumi*(ncut4->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
                expected_3jets+=cross_sections[i]*lumi*(ncut3->GetSumOfWeights())/(nmc->GetSumOfWeights())*K_Factor[i]*1000;
                section+=cross_sections[i];
                num_all+=ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights();
                num_4jets+=ncut4->GetSumOfWeights();
                num_3jets+=ncut3->GetSumOfWeights();
                num_MC+=nmc->GetSumOfWeights();
                sigma_3jets+=sqrt(ncut3->GetSumOfWeights() )*cross_sections[i]*lumi*K_Factor[i]*1000/nmc->GetSumOfWeights();
                Sigma_3jets+=sigma_3jets*sigma_3jets;
                sigma_4jets+=sqrt(ncut4->GetSumOfWeights())*cross_sections[i]*lumi*K_Factor[i]*1000/nmc->GetSumOfWeights();
                Sigma_4jets+=sigma_4jets*sigma_4jets;
                sigma_all+=sqrt(ncut4->GetSumOfWeights()+ncut3->GetSumOfWeights())*cross_sections[i]*lumi*K_Factor[i]*1000/tree1->GetEntries();
                Sigma_all+=sigma_all*sigma_all;
            }
            delete ncut3;
            delete ncut4;
            delete nmc;
        }
        sigma_3jets=sqrt(Sigma_3jets);
        sigma_4jets=sqrt(Sigma_4jets);
        sigma_all=sqrt(Sigma_all);
        efficiency_all=1.0*num_all/num_MC*100;
        efficiency_4jets=1.0*num_4jets/num_MC*100;
        efficiency_3jets=1.0*num_3jets/num_MC*100;
        oFile<<process[k]<<","<<Form("%f",section)<<",";
        oFile<<setprecision(2)<<expected_num<<"+/-"<<sigma_all<<","<<expected_4jets<<"+/-"<<sigma_4jets<<","<<expected_3jets<<"+/-"<<sigma_3jets<<",";
        oFile<<setprecision(3)<<efficiency_all<<","<<efficiency_4jets<<","<<efficiency_3jets<<",";
        oFile<<num_all<<","<<num_4jets<<","<<num_3jets<<","<<num_MC<<endl;
    }

    oFile.close();

}
