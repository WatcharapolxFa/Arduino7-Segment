import React from 'react'
import { Link } from 'react-router-dom'

import './style.css'

import Fa from '../../assets/img/pf1.jpg'
import Pluem from '../../assets/img/pf2.jpg'

import BottomImg from '../../components/bottom-img/bottom-img'

function Content() {

    return (
        <>
            <div className="container bd-black-top">
                <h3 className="text-home">การวิเคราะห์ทิศทางการเติบโตของสินค้าทางการเกษตรในประเทศไทย</h3>
            </div>
            <br />
            <div className="container bd-black">
                <br />
                <div className="main1">
                    <center>
                        <div className="card-content-img mg">
                            <Link to="/detail/1">
                                <img src={Fa} alt="" />
                            </Link>
                        </div>
                        <div className="card-content-img mg">
                            <Link to="/detail/2">
                                <img src={Pluem} alt="" />
                            </Link>
                        </div>
                        <div className="card-content-img mg">
                            <Link to="/detail/3">
                                <img src={Fa} alt="" />
                            </Link>
                        </div>
                    </center>
                </div>
                <br />
            </div>

            <br />
            <br />
            <BottomImg />
        </>
    )
}

export default Content
